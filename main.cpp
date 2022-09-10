#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
  priority_queue<ll,vector<ll>,greater<ll>>p;
  ll n;
  cin>>n;
  ll sum=0;
  for(int i=0;i<n;i++){
    ll x;
    cin>>x;
    sum+=x;
    p.push(x);
    while(sum<0)
    {
      sum-=p.top();
      p.pop();

    }
  }
  cout<<p.size();
}
