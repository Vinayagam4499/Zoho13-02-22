#include<stdio.h>
int main()
{
	int result = 0;
	int i = 0;
	int j = 0;
	for(i = 0;i< 6;i++)
	{
		for(j = 0;j< 3; j++)
		{
			if(i>1)
				continue;
				result++;
		}
	}
	printf("%d",result);
	return 0;
}


#include<stdio.h>
void index(int m)
{
    int a = 0, d = 0, e = 0;
    do
    {
        if (m%4==3)
        {
            d = d + 1;
            e = e + 2;
        }
        else if(m%4==2)
        {
            d = d+2;
        }
        else if(m%4==1)
        {
            d = d + 3;
            e = e+ 4;
        }
        else if(m % 4 ==0)
        {
            d = d + 4;
        }
        m = m - d; a++;
    }while(a<9)
    printf("%d",e);
}

int main()
{
    int x = 395;
            index(x);
            return 0;
}


#include<stdio.h>
int main()
{
    int a = 7516, d= 1, temp, result = 1;
    temp  = a;
    while(d)
    {
        d = temp % 10;
        temp = temp / 10;
        d %=4;
        switch(d)
        {
            case 0:
                result += (a/100) + (a%100);
                break;
            case 1:
                result += (a/100) * (a%100);
                break;
            case 2:
                result += (a/100) - (a%100);
                break;
            case 3:
                result += (a/100) / (a%100);
                break;
        }
    }
    printf("%d", result);
}

#include<stdio.h>
int main()
{
    char a[] = {"c","d","e","f","g","i"};
    for(int i=0;i<=6;i++)
    {
        a[i-1] = a[i-1] + i;

    }
    for(int i=0; i<6;i++)
    {
        printf("%c\n",a[i]);
    }
}

#include<stdio.h>
int func(int i, int j)
{
    return i++ * --j;

}
int main(){
    int result = 4, loop = -15;
    while (loop+=3)
    {
        result = result + func(result, loop);
    }
    printf("%d", result);
}

//find the missing statement

#include<stdio.h>
void find(int m)
{
    int k = 0; 
    while (m > 0)
    {
        if (m % 2 == 1)
        {
            k++;
        }
        //devide this
        m = m // 2;
        if (m == 0)
        {
            break;   
        }
    }
    printf("%d", k);
}
int main(){
    int x = 25;
    find(x);
    return 0;
}

#include<stdio.h>
int main()
{
    int arr[] = {9,18,10,9,11};
    int cat[] = {2,-1,4,2,1};
    int n =5;
    for(int i=0;i<n;i=i+1)
    {
        for(int j=0;j<n;j=j+1)
        {
            if(arr[i]%cat[j]==0)
            {
                int temp = arr[j];
                arr[j] = cat[i];
                cat[i] = temp;


            }
        }
    }
}


#include<stdio.h>
int main()
{
    int arr[] = {0,-5,3,-5,2,-1,1,1,-1};
    int size = 9;
    int last = arr[size-1];
    arr[size-1] = -1;
    for(int i = size;i >=0;i = i-1)
    {
        int temp = arr[i];
        arr[i] = last;
        if(last < temp)
        {
            last = temp;
        }
    }
    for(int i =0;i< size; i= i+1)
    {
        printf("%d",arr[i]);
    }
}

#include<stdio.h>
int main()
{
    int a[7] = {4,7,3,9,5,11,12};
    int b[7] = {1,2,3,4,5,6,7};

    for(i = 0;i<6;i++)
    {
        if(i%3!=0 && (i+1 <= 6))
        {
            b[i-1] = a[i];
            b[i] = a[i-1];
        }
    }
    for(i=0;i<6;i++)
    {
        printf("%d ",b[i]);
    }
}

#include<stdio.h>
int main()
{
    int count = 63;
    int i,j,k = 8;
    for(i=1,j=2;i<k&&j<k;i++)
    {
        if(i==3)
        {
            i = 0;
            j++;
        }
        count = count -1;
    }
    printf("%d",count);
    return 0;
}

#include<stdio.h>
int main()
{
	int x = 60,y,s = 0,m,n,t,u;
	y = x;
	for(m=0;y!=0;y/=10)
	{
		u = y%9;
		for(n=m,t = 1;n>=0;n--)
		{
			t = t*9;
			
		}
		if(u<5)
		{
			u = u+3;
		}
		s = s*u+t;
		
	}
	printf("%d",s);
}

#include<stdio.h>
int main()
{
    int x = 130, i=0,tot = 0;
    for(;i<=x;)
    {
        if(x-i<6)
        {
            tot = x+i;

        }
        else
        {
            tot = x*i;
        }
        i++;
    }
    printf("%d",tot);
}


#include<stdio.h>
int s = 1;
void key(int w)
{
	s = s * w;
}
int main()
{
	int a = 1,b;
	for(b=1;a<3 && b < 6;b++)
	{
		if(b==5)
		{
			b = 0;
			a++;
		}
		key(a);
		
	}
	printf("%d",b);
	return 0;
}


#include<stdio.h>
int execute(int a4, int a5)
{
    if(a4 ==0)
    {
        return 1;
    }
    if(a4%2==0)
    {
        execute(a4/2, a5/2);

    }
    return execute(a4-1, a5+1);

}

int main()
{
    int a1 = 15,a2 = 20;
    int a3 = execute(a1 + a2, a1 + a2 - a2);
    printf("%d",a3);
    return 0;
}

#include<stdio.h>
int main()
{
    int i = 0, n, count = 5;
    while(1)
    {
        n = i;
        do
        {
            count++;
            n--;
        }while(n > 0);
        if(i++==19)
        {
            break;
        }
    }
    printf("%d", count);
}

#include<stdio.h>
int main()
{
    int i = 0, j = 0;
    label1:while(i<3)
    {
        i++;
        while(j<3)
        {
            printf("loop");
            goto label1;
        }
    }
}

#include<stdio.h>
int main()
{
    char name[] = {'b','l','c','k','b','o','x'};
    for(int i = 0,j = 7;i<=7;i++,j--)
    {
        if (name[i] < name[j])
        {
            name[i] = name[j];
        }
        else
        {
            name[i] = name[i];
        }
    }

    for(int i= 0;i<=7;i++)
    {
        printf("%c",name[i]);
    }
}

#include<stdio.h>
int main()
{
    int x, m=5,n = 2,p=3,r=7;
    x = m++-n*r/p;
    printf("%d",x);
    return 0;
}

#include<stdio.h>
int main()
{
    char name[] = {'b','l','c','k','b','o','x'};
    for(int i = 0,j=7;i<=7;i++,j--)
    {
        if (name[i] < name[j])
        {
            name[i] = name[j];
        }
        else
        {
            name[i] = name[i];
        }
    }

    for(int i= 0;i<=7;i++)
    {
        printf("%c",name[i]);
    }
}

#include<stdio.h>
int main()
{
	int result = 0;
	int i = 0;
	int j = 0;
	for(i = 0;i< 6;i++)
	{
		for(j = 0;j< 3; j++)
		{
			if(i>1)
				continue;
				result++;
		}
	}
	printf("%d",result);
	return 0;
}

#include<stdio.h>
int main()
{
	static int num;
	int i;
	int sum = 15;
	for(i=0;i<=4;i+=2)
	{
		switch(i){
			case 1:num++;break;
			case 2:num+=2;//break
			case 4:num%=2;i=-1;continue;
			default: --num;continue;
		}
		sum += num;
	}
	printf("%d",sum);
	return 0;
	
}

#include<stdio.h>
void find(int m)
{
    int k = 0;
    while(m>0)
    {
        if(m%2==1)
        {
            k++;
        }
        m=m/2;
        if(m==0)
        {
            break;
        }

    }
    printf("%d",k);

}
int main()
{
    int x = 20;
    find(x);
    return 0;
}

#include<stdio.h>
void index(int m)
{
    int a = 0, d = 0, e = 0;
    do
    {
        if (m%4==3)
        {
            d = d + 1;
            e = e + 2;
        }
        else if(m%4==2)
        {
            d = d+2;
        }
        else if(m%4==1)
        {
            d = d + 3;
            e = e+ 4;
        }
        else if(m % 4 ==0)
        {
            d = d + 4;
        }
        m = m - d; a++;
    }while(a<9)
    printf("%d",e);


}

int main()
{
    int x = 395;
            index(x);
            return 0;
}


#include<stdio.h>
int mark(int x)
{
	if(x <=0)
	{
		return 1;
		
	}
	return 0;
	
}
int main()
{
	int x = 11011,t,a = 0;
	while(x > 0)
	{
		t = x % 10;
		a = a + mark(t);
		x = x/10;
	}
	printf("%d",a);
}

