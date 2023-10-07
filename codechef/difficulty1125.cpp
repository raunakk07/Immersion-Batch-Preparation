//question link = "https://www.codechef.com/problems/CRDGAME?tab=statement"

#include <iostream>
using namespace std;

int sum(int n)
{
    int s=0,digit;
    while(n!=0)
    {
        digit=n%10;
        s=s+digit;
        n=n/10;
    }
    
    return s;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long n;
	    cin>>n;
	    int a,b,chef=0,m=0;
	    
	    for(long i=0;i<n;i++)
	    {
	        cin>>a;
	        a=sum(a);
	        
	        cin>>b;
	        b=sum(b);
	        
	        if(a>b)
	        chef++;
	        else if(b>a)
	        m++;
	        else
	        {
	            m++;
	            chef++;
	        }
	    }
	    
	    if(chef>m)
	    cout<<"0 "<<chef<<endl;
	    else if(chef<m)
	    cout<<"1 "<<m<<endl;
	    else
	    cout<<"2 "<<chef<<endl;
	    
	}
	return 0;
}
