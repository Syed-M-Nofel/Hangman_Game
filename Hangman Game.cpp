#include<iostream>
#include<fstream>
#include<cstdlib>
#include<stdlib.h>
#include<cstring>
#include<ctime>
#include<conio.h>
using namespace std;
void print_hangman(int);
int main()
{
				        	system("Color B0");
		int x=0;
		string countries_array[189];	
		ifstream myfile2;
		myfile2.open("countries.txt");
		while(myfile2,x<189)
		{
			string a;
			getline(myfile2,a);
			countries_array[x]=a;
			x++;
		}
   srand(time(NULL));
	int randomizer=rand()%100+0;
	string s = countries_array[randomizer];
	
//	cout<<s<<endl;

    int n = s.length();
    char char_array[n + 1];
    strcpy(char_array, s.c_str());	
    cout<<"\t\t\t\t\t\tHint\n";
    cout<<"\t\t\t\t\t";
	cout<<char_array[0];
	for(int a=1;a<n-1;a++)
	{
		cout<<" _ ";
	}
	cout<<char_array[n-1];
	cout<<endl;	
	char array2[n+1];
	array2[n-1]=char_array[n-1];
	array2[0]=char_array[0];
	
	for(int a=1;a<=n-2;a++)
	{
		array2[a]='\0';
	}
    int mistake=0;
    int correct=0;

	do
	{
			int match=0;
			char character;
			cout<<"\n\t\t\t\t          enter a character\n";
	        cout<<"\t\t\t\t";cin>>character;
	        
		for(int a=0;a<n;a++)
    	{
			if(character==char_array[a])
        	{
        		array2[a]=char_array[a];
        		match++;
        	}
     	}
		 if(match==0)
		 {
		 	mistake=mistake+1;
		 }
		 else
		 {
		 	correct=correct+1;
		}	
		 print_hangman(mistake);
		 
		 cout<<"\t\t\t\t\tmistakes = "<<mistake<<endl;
		 cout<<"\t\t\t\t\t---word----"<<endl;
		 cout<<"\t\t\t\t\t";
      	for(int a=0;a<n;a++)
	   {
	   	if(array2[a]=='\0')
	   	{
	   		cout<<" _ ";
		}
	    else
	      {
           cout<<" "<<array2[a];		   	
	       }
     	}
     
     if(mistake>=5)
     {
        	system("Color 40");
     	cout<<"\n\n\t\t\t\t\t----you fail-------"<<endl;
     	break;
	 }
	 //cout<<"\nc"<<correct<<endl;
	 //cout<<"n"<<n<<endl;
	 if(correct>=n-2)
	 {
	 	system("Color F0");
	 	cout<<"\n\n\t\t\t\t\t-----you  win------"<<endl;
	 	break;
	 }

	}while(2);
}
void print_hangman(int x)
{
	switch(x)
	{
		case 0:
			system("CLS");
			system("Color E9");
	cout<<"\t\t\t\t\t ______________________________"<<endl;
	cout<<"\t\t\t\t\t[                              ]"<<endl;
	cout<<"\t\t\t\t\t[                              ]"<<endl;
	cout<<"\t\t\t\t\t[                              ]"<<endl;
	cout<<"\t\t\t\t\t[                              ]"<<endl;
	cout<<"\t\t\t\t\t[                              ]"<<endl;
	cout<<"\t\t\t\t\t[                              ]"<<endl;
	cout<<"\t\t\t\t\t[                              ]"<<endl;
	cout<<"\t\t\t\t\t[                              ]"<<endl;
	cout<<"\t\t\t\t\t[                              ]"<<endl;
	cout<<"\t\t\t\t\t[                              ]"<<endl;
	cout<<"\t\t\t\t\t______________________________"<<endl;
	
	break;
		case 1:
			system("CLS");
			system("Color E9");
	cout<<"\t\t\t\t\t ______________________________"<<endl;
	cout<<"\t\t\t\t\t[              }               ]"<<endl;
	cout<<"\t\t\t\t\t[              O               ]"<<endl;
	cout<<"\t\t\t\t\t[              |               ]"<<endl;
	cout<<"\t\t\t\t\t[              |               ]"<<endl;
	cout<<"\t\t\t\t\t[              |               ]"<<endl;
	cout<<"\t\t\t\t\t[              |               ]"<<endl;
	cout<<"\t\t\t\t\t[                              ]"<<endl;
	cout<<"\t\t\t\t\t[                              ]"<<endl;
	cout<<"\t\t\t\t\t[                              ]"<<endl;
	cout<<"\t\t\t\t\t[                              ]"<<endl;
	cout<<"\t\t\t\t\t ______________________________"<<endl;
	
	break;
		  
			
		case 2:
			system("CLS");
			system("Color E9");
			cout<<"\t\t\t\t\t ______________________________"<<endl;
	cout<<"\t\t\t\t\t[              }               ]"<<endl;
	cout<<"\t\t\t\t\t[              O               ]"<<endl;
	cout<<"\t\t\t\t\t[              |               ]"<<endl;
	cout<<"\t\t\t\t\t[              |               ]"<<endl;
	cout<<"\t\t\t\t\t[             /|               ]"<<endl;
	cout<<"\t\t\t\t\t[            / |               ]"<<endl;
	cout<<"\t\t\t\t\t[                              ]"<<endl;
	cout<<"\t\t\t\t\t[                              ]"<<endl;
	cout<<"\t\t\t\t\t[                              ]"<<endl;
	cout<<"\t\t\t\t\t[                              ]"<<endl;
	cout<<"\t\t\t\t\t ______________________________"<<endl;
			break;
		case 3:
			system("CLS");
			system("Color E9");
				
	cout<<"\t\t\t\t\t ______________________________"<<endl;
	cout<<"\t\t\t\t\t[              }               ]"<<endl;
	cout<<"\t\t\t\t\t[              O               ]"<<endl;
	cout<<"\t\t\t\t\t[              |               ]"<<endl;
	cout<<"\t\t\t\t\t[              |               ]"<<endl;
	cout<<"\t\t\t\t\t[             /|\\              ]"<<endl;
	cout<<"\t\t\t\t\t[            / | \\             ]"<<endl;
	cout<<"\t\t\t\t\t[                              ]"<<endl;
	cout<<"\t\t\t\t\t[                              ]"<<endl;
	cout<<"\t\t\t\t\t[                              ]"<<endl;
	cout<<"\t\t\t\t\t[                              ]"<<endl;
	cout<<"\t\t\t\t\t ______________________________"<<endl;
			break;
		
		case 4:
			system("CLS");
			system("Color E9");
	cout<<"\t\t\t\t\t ______________________________"<<endl;
	cout<<"\t\t\t\t\t[              }               ]"<<endl;
	cout<<"\t\t\t\t\t[              O               ]"<<endl;
	cout<<"\t\t\t\t\t[              |               ]"<<endl;
	cout<<"\t\t\t\t\t[              |               ]"<<endl;
	cout<<"\t\t\t\t\t[             /|\\              ]"<<endl;
	cout<<"\t\t\t\t\t[            / | \\             ]"<<endl;
	cout<<"\t\t\t\t\t[             /                ]"<<endl;
	cout<<"\t\t\t\t\t[            /                 ]"<<endl;
	cout<<"\t\t\t\t\t[                              ]"<<endl;
	cout<<"\t\t\t\t\t[                              ]"<<endl;
	cout<<"\t\t\t\t\t ______________________________"<<endl;
			
			break;
		case 5:
			system("CLS");
			system("Color E9");
	cout<<"\t\t\t\t\t ______________________________"<<endl;
	cout<<"\t\t\t\t\t[              }               ]"<<endl;
	cout<<"\t\t\t\t\t[              O               ]"<<endl;
	cout<<"\t\t\t\t\t[              |               ]"<<endl;
	cout<<"\t\t\t\t\t[              |               ]"<<endl;
	cout<<"\t\t\t\t\t[             /|\\              ]"<<endl;
	cout<<"\t\t\t\t\t[            / | \\             ]"<<endl;
	cout<<"\t\t\t\t\t[             / \\              ]"<<endl;
	cout<<"\t\t\t\t\t[            /   \\             ]"<<endl;
	cout<<"\t\t\t\t\t[                              ]"<<endl;
	cout<<"\t\t\t\t\t[                              ]"<<endl;
	cout<<"\t\t\t\t\t ______________________________"<<endl;
			
			break;
	}
	
}
