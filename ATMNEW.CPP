#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int a=100,b=100,c=100,d=100,e=100;//f=100;
start :long int amt,n;
cout<<"Enter Amount To withdraw"<<endl;
cin>>amt;
n=amt;
if(amt<=268000)

   { if(a!=0 && n/2000<=100 && a>n/2000)
      {cout<<endl<<"Give "<<n/2000<<" notes of 2000";
       a=a-n/2000;
       n=n-(n/2000)*2000;
       }

     else if(a!=0 && a<n/2000)
	   {cout<<endl<<"give "<<a << "notes of 2000";
	    int t=n-a*2000;
	      n=t;
	      a=0;
	    }
     else
	   { if(a!=0 && n>200000)
	       {cout<<endl<<"Give 100 notes of 2000";
		a=0;
		n=n-200000;
		}
	    }

///added by eshan vohra
	 if(b!=0 && n/500<=100 && b>n/500)
      {cout<<endl<<"Give "<<n/500<<" notes of 500";
       b=b-n/500;
       n=n-(n/500)*500;
       }

     else if(b!=0 && b<n/500)
	   {cout<<endl<<"give "<<b << "notes of 500";
	    int t=n-b*500;
	      n=t;
	      b=0;
	    }
     else
	   { if(b!=0 && n>50000)
	       {cout<<endl<<"Give 100 notes of 500";
		b=0;
		n=n-50000;
		}
	    }


	   if(c!=0 && n/200<=100 && c>n/200)
      {cout<<endl<<"Give "<<n/200<<" notes of 200";
       c=c-n/200;
       n=n-(n/200)*200;
       }

     else if(c!=0 && c<n/200)
	   {cout<<endl<<"give "<<c << "notes of 200";
	    int t=n-c*200;
	      n=t;
	      c=0;
	    }
     else
	   { if(c!=0 && n>20000)
	       {cout<<endl<<"Give 100 notes of 200";
		c=0;
		n=n-20000;
		}
	    }

	    if(d!=0 && n/100<=100 && d>n/100)
      {cout<<endl<<"Give "<<n/100<<" notes of 100";
       d=d-n/100;
       n=n-(n/100)*100;
       }

     else if(d!=0 && d<n/100)
	   {cout<<endl<<"give "<<d << "notes of 100";
	    int t=n-d*100;
	      n=t;
	      d=0;
	    }
     else
	   { if(d!=0 && n>10000)
	       {cout<<endl<<"Give 100 notes of 100";
		d=0;
		n=n-10000;
		}
	    }

	    if(e!=0 && n/50<=100 && e>n/50)
      {cout<<endl<<"Give "<<n/50<<" notes of 50";
       e=e-n/50;
       n=n-(n/50)*50;
       }

     else if(e!=0 && e<n/50)
	   {cout<<endl<<"give "<<e << "notes of 50";
	    int t=n-e*50;
	      n=t;
	      e=0;
	    }
     else
	   { if(e!=0 && n>5000)
	       {cout<<endl<<"Give 100 notes of 50";
		e=0;
		n=n-5000;
		}
	    }



   }







else
{cout<<endl<<"Insufficient Funds Left";}
cout<<endl<<endl<<"Press Y to withdraw more"<<endl;
if(getch()=='y' || getch()=='Y')
{goto start;
}
 cout<<endl<<"End";
getch();
}

