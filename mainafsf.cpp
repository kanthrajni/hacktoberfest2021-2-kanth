#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    long int n,d,p,i;
    string arr;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%ld",&n);
        char arr[n+1];
        scanf("%s",arr);
        int isolation[n]={0};
        scanf("%ld",&d);
        while(d>0)
        {
            vector <long int> v;
            scanf("%ld",&p);
            isolation[p-2]=1;
            if(arr[0]=='1' && arr[1]=='0')
            {
                if(isolation[0]!=1)
                v.push_back(1);
            }
            for(i=0;i<n-1;i++)
            {
                if(arr[i]=='1')
                {
                    if(arr[i-1]=='0' && isolation[i-1]==0)
                    v.push_back(i-1);
                    if(arr[i+1]=='0' && isolation[i]==0)
                    v.push_back(i+1);
                }
            }
            if(arr[n-1]=='1' && arr[n-2]=='0')
            {
                if(isolation[n-2]==0)
                v.push_back(n-2);
            }
            for(i=0;i<v.size();i++)
            {
                arr[v[i]]='1';
            }
            d--;
        }
        long int res=count(arr,arr+n+1,'1');
        printf("%ld\n",res);
        t--;
    }
    return 0;
}
