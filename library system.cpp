#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	string b_name[]={"Physics","Chemistry","Math","Urdu","English"},  b_author[]={"SK","Saad","Ehtisham","Ahmed","Hamza"}, b_publisher[]={"aaa","bbb","ccc","ddd","eee"};
	
	int b_edition[]={2002,2003,2002,1999,2023}, no_books[]={2,1,5,6,2}; 
	
	 int price[] = {99,98,97,96,95};
	 int iban[]={1001,1002,1003,1004,1005};
	 
	int max=4;
	char temp2;
	  int size = sizeof(iban) / sizeof(int);


	
	
	char s_gender[99];
	s_gender[0]='m';
	s_gender[1]='f';
	s_gender[2]='m';
	s_gender[3]='f';
	s_gender[4]='f';
	

	
	int rollnum[99];
	rollnum[0]=70071; 
	rollnum[1]=88882;
	rollnum[2]=99993;
	rollnum[3]=60064;
	rollnum[4]=10015;
	
int	s_age[99];
	s_age[0]=99;
	s_age[1]=80;
	s_age[2]=72;
	s_age[3]=68;
	s_age[4]=19;
	
	int t_num[99],t_age[99];
	t_num[0]=9999;
	t_num[1]=8888;
	t_num[2]=4444;
	t_num[3]=6666;
	t_num[4]=5555;
	
	t_age[0]=55;
	t_age[1]=32;
	t_age[2]=29;
	t_age[3]=45;
	t_age[4]=99;
	
	char t_gender[99];
	t_gender[0]='m';
	t_gender[1]='m';
	t_gender[2]='f';
	t_gender[3]='f';
	t_gender[4]='m';
	
	bool match=false;
	int chkiban;
	int t_max=4;
	char input,temp;
	main:
	
	
	  system("cls");
	
	  
	for (int i = 0; i < size - 1; ++i) 
	   {
        for (int j = 0; j < size - i - 1; ++j) {
            if (price[j] > price[j + 1]) {
                // Swap keys
                
                swap(iban[j], iban[j + 1]);
                // Swap values accordingly
                swap(price[j], price[j + 1]);
                swap(b_name[j], b_name[j + 1]);
                swap(b_author[j], b_author[j + 1]);
                swap(b_edition[j], b_edition[j + 1]);
                swap(b_publisher[j], b_publisher[j + 1]);
                swap(no_books[j], no_books[j + 1]);
               
            }
     	   }
    	}
	
	
	for (int i = 0; i <=t_max; ++i) 
	   {
        for (int j = 0; j <= t_max - i - 1; ++j) {
            if (t_age[j] < t_age[j + 1]) {
                // Swap keys
                
                swap(t_age[j], t_age[j + 1]);
                // Swap values accordingly
                swap(t_num[j], t_num[j + 1]);
                swap(t_gender[j], t_gender[j + 1]);
                
            }
     	   }
    	}
	
	
	
		 	for (int i = 0; i <= max - 1; ++i) 
	   	{
        for (int j = 0; j <= max - i - 1; ++j) {
            if (s_age[j] > s_age[j + 1]) {
                // Swap keys
                
                swap(s_age[j], s_age[j + 1]);
                // Swap values accordingly
                swap(rollnum[j], rollnum[j + 1]);
                swap(s_gender[j], s_gender[j + 1]);
                 
            }
     	   }
    	}
	
	
	
	
	cout<<"********************************************************************************************************************"<<endl;
	cout<<"*********************************************** LIBRARY MANAGEMENT SYSTEM ******************************************"<<endl;
	cout<<"********************************************************************************************************************"<<endl<<endl;
	
	cout<<"Press\n\n";
	cout<<" i for Issuing Book\n";
	cout<<" B for Book List \n";
	cout<<" S for Student List\n";
	cout<<" T to Teacher List\n"<<endl;
	cin>>input;
	
	if(input=='i'||input=='I')
	{
			cout<<"Enter IBAN number : ";
			cin>>chkiban;
			for(int i=0;i<=size;i++)
			{
				if(chkiban==iban[i])
				{
					if(no_books[i]!=1)
					{
						
						   
						    no_books[i]=no_books[i]-1;
						    match=true;
						    cout<<"\n  Issuing book "<<b_name[i]<<"... "<<endl<<endl;
						    
					}
					else
					{
					cout<<"only one book lleft can't issue"<<endl;
						
						
					    cout << endl; 
					    
					    cout<<"Press\n";
					    cout<<" M for main menu \n";
					    cout<<" Any key for exit \n";                                                                                                                                                                                                                                                                                         
						cin>>temp2;
						if(temp2=='m'||temp2=='M')
							{
								goto main;
							}
						else{
								exit(1);
							}
					   	
					}
				}
				
				
			}
			
			 if(!match)
				{
					cout<<"iban not matched with library database"<<endl;
					cout << endl; 
					    
					    cout<<"Press\n";
					    cout<<" M for main menu \n";
					    cout<<" Any key for exit \n";
						cin>>temp2;
						if(temp2=='m'||temp2=='M')
							{
								goto main;
							}
						else{
								exit(1);
							}		
				}
				
			else if(match==true)
			{
				
						
				cout<<"T for teacher\n";
				cout<<"S for student \n";
				cin>>temp;
				if(temp=='t'||temp=='T')
				{
					 cout<<"\t\t\t\tEnter teacher info\n"<<endl;
					t_max=t_max+1;
					cout<<"Teacher number";
					
					cin>>t_num[max];
	
			
	
	
					cout<<"Teacher age";
					cin>>t_age[max];
					cout<<"Teacher gender";
					cin>>t_gender[max];
					cout<<"************book issued******************";
					
					
					cout << endl; 
					    
						
					    cout<<"Press\n";
					    cout<<" M for main menu \n";
					    cout<<" Any key for exit \n";
						cin>>temp2;
						if(temp2=='m'||temp2=='M')
							{
								goto main;
							}
						else{
								exit(1);
							}
	
	   
						
				}
				else if(temp=='s'||temp=='S')
				{
					 cout<<"\t\t\t\tEnter student info\n"<<endl;
					max=max+1;
					cout<<"Student roll number";
					
					cin>>rollnum[max];
	
			
	
	
					cout<<"student age";
					cin>>s_age[max];
					cout<<"student gender";
					cin>>s_gender[max];
					cout<<"************book issued******************";
					
					cout << endl; 
					    
					    cout<<"Press\n";
					    cout<<" M for main menu \n";
					    cout<<" Any key for exit \n";
						cin>>temp2;
						if(temp2=='m'||temp2=='M')
							{
								goto main;
							}
						else{
								exit(1);
							}
				}
					
			
			}
				
					
			
		}
		
		
	
	
	else if(input=='b'||input=='B')
	{ 
		
		 cout << "******************************** Sorted list acoording to Book Price *********************************************8\n";
	    for (int i = 0; i < size; ++i)
		 {
		 	
		    	cout<<"\n\n\t\t\t\t\tPrice   : "<< price[i] << " Rs "<<endl<<endl;
		           
				cout<<"IBAN no   : "<< iban[i] << " "<<endl;
		        cout<<"Book Name : "<<b_name[i]<<" "<<endl;
		        cout<<"Author    : "<<b_author[i]<<" "<<endl;
		        cout<<"Publisher : "<<b_publisher[i]<<" "<<endl;
		        cout<<"Edition   : "<<b_edition[i]<<" "<<endl;
		       
		        cout<<"Quantity  : "<<no_books[i]<<" "<<endl;
		        cout<<"\n\n\t\t**********************************************************************\n\n";
		        
		    }
			  cout << endl; 
					    
					    cout<<"Press\n";
					    cout<<" M for main menu \n";
					    cout<<" Any key for exit \n";
						cin>>temp2;
						if(temp2=='m'||temp2=='M')
							{
								goto main;
							}
						else{
								exit(1);
							}
	   
	
	}
	else if(input=='s'||input=='S')
	{
		
		
		 cout << "************************************** Sorted list acoording to Student age **********************************************************\n";
		 
	    for (int i = 0; i <= max; i++)
		 {
		 	
		    	cout<<"\t\t\t\t\tAge : "<<s_age[i]<<" "<<endl;
		           
				cout<<"Student Roll number : "<< rollnum[i] << " "<<endl;
				    
		        
		        cout<<"Gender              : "<<s_gender[i]<<" "<<endl;
	
		        cout<<"\n\n\t\t***********************************************************************\n\n";
		        
		    }
		    
			  cout << endl; 
					    
					    cout<<"Press\n";
					    cout<<" M for main menu \n";
					    cout<<" Any key for exit \n";
						cin>>temp2;
						if(temp2=='m'||temp2=='M')
							{
								goto main;
							}
						else{
								exit(1);
							}
	   
	
	}
	else if(input=='T'||input=='t')
	{
		
		 cout << "************************************** Sorted list acoording to Teacher age **********************************************************\n";
		 
	    for (int i = 0; i <= max; ++i)
		 {
		 	
		    	cout<<"\t\t\t\t\tAge : "<<t_age[i]<<" "<<endl;
		           
				cout<<"Teacher number : "<< t_num[i] << " "<<endl;
				    
		        
		        cout<<"Gender              : "<<t_gender[i]<<" "<<endl;
	
		        cout<<"\n\n\t\t***********************************************************************\n\n";
		        
		    }
		    
			  cout << endl; 
					    
					    cout<<"Press\n";
					    cout<<" M for main menu \n";
					    cout<<" Any key for exit \n";
						cin>>temp2;
						if(temp2=='m'||temp2=='M')
							{
								goto main;
							}
						else{
								exit(1);
							}
	   
	
	}
	else 
	{
		
			  cout <<"wrong input"<< endl; 
					    
					    cout<<"Press\n";
					    cout<<" M for main menu \n";
					    cout<<" Any key for exit \n";
						cin>>temp2;
						if(temp2=='m'||temp2=='M')
							{
								goto main;
							}
						else{
								exit(1);
							}
	   
	
	}
	
}
