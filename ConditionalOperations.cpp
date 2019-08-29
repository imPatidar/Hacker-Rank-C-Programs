//
// Created by Pankaj Patidar on 29/08/19.
//

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    const char *words[]={"one","two","three","four","five","six","seven","eight","nine"};
    cin>>n;
    cout<<((n<=9) ? words[n-1] : "Greater than 9")<<endl;
    return 0;
}
