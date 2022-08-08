#include<iostream>
#include<string>
#include"scheduleCPU.h"
#include"scheduleDisk.h"

using namespace std;

int main(){
    int n;
    
    ntm:cout<<"1.SCHEDULING CPU\n2.SCHEDULING DISK\n3.EXIT\n";

    do{
    cout<<"\nNhap vao lua chon :";
    cin>>n;
    }while(n < 0 || n > 3);

    switch(n){
        case 1 :
            ntm0:cout<<"\n\nSCHEDULING CPU\n";

            int n;
            do{
                ntm4:cout<<"1.FirstComeFirstServed\n2.Priority\n3.Other\n4.Exit\n\nVui long nhap :";
                cin>>n;

            }while(n < 0 || n > 4);

            switch(n){
                case 1 :
                cout<<"\nFIRST COME FIRST SERVED SCHEDULING\n";
                fcfs();goto ntm0;
                case 2 :
                cout<<"\nPRIORITY SCHEDULING\n";
                priority();goto ntm0;
                case 3 :
                    char a[4];

                    cout<<"\nBan muon lua chon lap lich khac khong (YES ? NO) or (yes , no) :";cin>>a;

                    if(strcasecmp(a,"YES")==0)
                        goto ntm;
                    else 
                        goto ntm0;
                case 4 :
                    goto ntm2; 
                
            }break;
        case 2 :
            ntm1:cout<<"\n\nSCHEDULING DISK\n";

            int m;

            do{
            cout<<"\n1.FirstComeFirstServed\n2.Other\n3.Exit\n\nVui long nhap :";cin>>m;
            }while(m < 0 || m > 3);

            switch(m){
                case 1 :
                    cout<<"\nFIRST COME FIRST SERVED SCHEDULING\n";
                    fcfs_disk();goto ntm1;
                case 2 :
                    char a[4];
                    cout<<"\nBan muon lua chon lap lich khac khong (YES ? NO) or (yes , no) :";cin>>a;

                    if(strcasecmp(a,"YES")==0)
                        goto ntm;
                    else 
                        goto ntm1;
                case 3 :
                    goto ntm2;
            }break;
        case 3:
            char a[4];

            cout<<"\nBAN CHAC CHAN MUON THOAT (YES , NO) or (yes , no) :";cin>>a;

            if(strcasecmp(a,"YES")==0)
                break;
            else 
                goto ntm;
            
    }

    ntm2:cout<<"\n..............!";
    return 0;
}