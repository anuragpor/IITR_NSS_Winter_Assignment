#include<iostream>
using namespace std;
int main()
{
	char str1[]="medicaal";
	char str2[]="decimmal";
	int H1[26]{},i;
	int H2[26]{};
	for( i=0;str1[i]!='\0'&&str2[i]!='\0';i++)
	{
		H1[str1[i]-97]++;
		H2[str2[i]-97]++;
	}
	
	if(str1[i]!=str2[i])
	{
		cout<<"Not a amalagam\n";
	}
	else
	{
		for(int i=0;i<26;i++)
		{
			if(H1[i]!=H2[i])
			{
			
			cout<<"Not a analgam"<<endl;
			return 1;
		    }
		}
	}
	cout<<"Both the string forms an anagram\n"<<str1<<endl<<str2;
	
	
}
