#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
{
	int i,t;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		int n;
		scanf("%d",&n);
		string s1="",s[n];
        int max=0;
        for(int j=0;j<n;j++)
        {
            s[j]=ob.next();
                if(max<s[j].length())
                {
                    max=s[j].length();
                    s1=s[j];
                }
            }
            int w=0;
            for(int q=0;q<n;q++)
            {
                for(int k=1;k<(s1.length()-1);k++)
                {
                    if(s1.substring(k,s1.length()).equals(s[q].substring(1,s[q].length())))
                    {
                        w++;
                        break;
                    }
                }
            }
            if(w==n)
                System.out.println(s1.substring(1,s1.length()));
            else
                System.out.println("*");
	}
	return 0;
}
