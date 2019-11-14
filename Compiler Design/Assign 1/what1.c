
/*
Name: 			Sudhir Daga
Roll. No.: 		90
Reg. No.: 		288
*/

int what(int data[],int n)
{
    int i,j;
    for(i=1;i<n;i++)
    {
        int temp=data[i];
        for(j=i-1;j>=0;j--)
        {
            if(temp<=data[j])
            {
                break;
            }
            else
            {
                data[j+1]=data[j];
            }
        }
        data[j+1]=temp;
    }
    return 0;
}
