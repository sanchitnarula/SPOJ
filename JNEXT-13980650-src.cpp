#include<iostream>
using namespace std;
int num[1000001];
void reverse(int start,int size)
{

			
		int i=start,j=size-1;
	
		
		while(i<j)
		{
			int temp=num[i];
			num[i]=num[j];
			num[j]=temp;	
			i++;
			j--;
		}
	

}
int main()
{
	
	int t,i;
	
	cin>>t;
	while(t--)
	{
		int size;
		cin>>size;
		for(i=0;i<size;i++)
		cin>>num[i];
		
		for(i=size-1;i>=1;i--)
		{
			if(num[i-1]<num[i])
			{
				break;
			}
		}
		if(i==0)
		{
			cout<<"-1"<<endl;
			continue;
		}
			if(i==size-1 )
			{
				int temp=num[i-1];
				num[i-1]=num[i];
				num[i]=temp;
			}
			else
			{
				int min_index=size-1;
				for(int j=size-1;j>=i;j--)
				{
					if(num[j]>num[i-1])
						{
							min_index=j;	
							break;
						}	
				}
				
				int temp=num[i-1];
				num[i-1]=num[min_index];
				num[min_index]=temp;
				reverse(i,size);
					
			}
			
			
			
			
			
			for(int i=0;i<size;i++)
			cout<<num[i];
		cout<<endl;
		
	}
	
	
	return 0;
}