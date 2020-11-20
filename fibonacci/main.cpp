//
//  main.cpp
//  fibonacci
//
//  Created by Huw Borradaile on 11/11/2020.
//



#include <iostream>
#include <vector>

using namespace std;

int fibonacci(int n)
{
    if(n <= 0) return 0;
    if(n == 1) return 1;
    
    return fibonacci(n-1) + fibonacci(n-2);
}

long unsigned int fib2(int n)
{
    vector<long unsigned int> sequence;
    long unsigned int sum=0;
    for(int i = 0; i<n; i++)
    {
        if(i <= 1) sequence.push_back(1);
        else
        {
            if(sequence[i-1] + sequence[i-2] >= 4e6) break;
            sequence.push_back(sequence[i-1] + sequence[i-2]);
        }
        
        cout << sequence[i] << " ";
    }
    
    for(int i=0; i<sequence.size(); i++)
    {
        if(sequence[i] % 2) sum +=sequence[i];
    }
    return sum;
}

int main(int argc, const char * argv[]) {

    cout << fib2(100);
    
    return 0;
}
