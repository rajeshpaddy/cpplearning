
#include "learn01.h"
#include <iostream>
#include <vector>
#include <queue> 
#include <stack> 
#include <unistd.h>
using std::vector;
using std::cout;
using std::endl;
int main(int argc, char* argv[]){

    learn01 l;
    vector<string> in;
    std::queue<string> q ;
    std::stack<string> s;
    in.push_back("Rajesh");
    in.push_back("Padmanabhan");
    cout << "arguments size:" << sizeof(argv) << ":" << sysconf(_SC_ARG_MAX) <<endl;
    for (uint i=1;i<sizeof(argv) ;i++)
    {
        cout << argv[i] <<std::endl;    
        q.push(argv[i]);
        s.push(argv[i]);
    }
    
    for (uint i=1;i<sizeof(argv) ;i++)
    {
        if (!q.empty())
        {
            cout << "Queue:" << q.front() <<std::endl;    
            q.pop();
        }
        
    }
    
    for (uint i=1;i<sizeof(argv) ;i++)
    {
        if(!s.empty())
        {
            cout << "Stack:" << s.top() <<std::endl;    
            s.pop();
        }
    }
    // l.print(" This is a new thing added!!..");

}