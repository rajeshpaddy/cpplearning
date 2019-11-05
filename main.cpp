#include "learn01.h"
#include <iostream>
#include <vector>
#include <queue> 
#include <stack> 
#include <unistd.h>
using std::vector;
using std::cout;
using std::endl;
int main(int argc, char * argv[]){

    std::queue<string> q ;
    std::stack<string> s;
    
    cout << "arguments size  :" << sizeof(argv) << ":" << 72 <<endl;
for (int i=1;i<argc ;i++)
    {
        cout << argv[i] <<std::endl;    

        q.push(argv[i]);
        s.push(argv[i]);
    }
    
    for (int i=1;i<argc ;i++)
    {
        if (!q.empty())
        {
            cout << "Queue :" << q.front() <<std::endl;    
            q.pop();
        }
        
    }
    
    for (int i=1;i<argc ;i++)
    {
        if(!s.empty())
        {
            cout << "Stack:" << s.top() <<std::endl;    
            s.pop();
        }
    }
    // l.print(" This is a new thing added!!..");

}