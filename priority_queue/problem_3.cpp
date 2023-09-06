//#####################_Problem_Statement_#################
//Q.3: implement priority-queue using the stack.

#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>

using namespace std;

class Max_priority_queue{

    stack<int>  s;
    int top;
    int size;

    public :

    Max_priority_queue()
    {
        this->size = 0;
        this->top = 1000;
    }

    void push(int num)
    {
        if(this->top > num)
        this->top = num;

         this->s.push(num);
         this->size++;
         return ;
    }

    void pop()
    {
        vector<int> v;
        while(!this->s.empty())
        {
            v.push_back(this->s.top());
            this->s.pop();
        }

        sort(v.begin(),v.end());

        this->top = v[1];

        for(int i = 1;i<v.size();i++)
        {
            this->s.push(v[i]);
        }

        this->size--;
        return;
    }

    int peek()
    {
        return this->top;
    }

    bool isEmpty()
    {
        return this->size==0;
    }

    int getSize()
    {
        return this->size;
    }
};

int main()
{
    Max_priority_queue s;
    s.push(2);
    s.push(3);
    s.push(4);
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    s.pop();
    s.pop();
    cout<<"Ths size is : "<<s.getSize()<<endl;
    cout<<endl<<"the queue is empty or not : "<<s.isEmpty()<<endl;
}//Jai Jai Jai Bajarangbali...