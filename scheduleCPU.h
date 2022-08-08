#include<iostream>

using namespace std;

//First Come , First Server
void fcfs(){
    int n;

    cout<<"Nhap vao so tien trinh : ";cin>>n;

    int a[n],b[n];
    int index[n],c[n];

    for(int i=0;i<n;i++){
        cout<<"Nhap vao tien trinh P";
        cin>>c[i];
        //Luu trinh tu
        index[i] = c[i] - 1;
        cout<<"Nhap vao thoi gian thuc hien cua tien trinh P"<<index[i]+1<<": ";
        cin>>a[(index[i])];
    }

    //Khoi tao thoi gian tien trinh dau bat dau tu 0
    b[(index[0])] = 0;
    
    for(int i=1;i<n;i++)
        b[index[i]] = a[index[i-1]] + b[index[i-1]];

    //Tinh toan thoi gian thuc hien cac tien trinh
    cout << "\nThoi gian co doi cac tien trinh la: ";
    for (int i = 0 ; i < n ; i++)
        cout << "P" << index[i] + 1<< "=" << b[index[i]] << " ";

    //Tinh tong thoi gian thuc hien
    float sum_wait=0;
    for (int i = 0 ; i < n ; i++)
        sum_wait += b[(index[i])];

    cout << "\nThoi gian cho doi trung binh la : " << sum_wait / n;

}

//Priority
void priority(){
    int n;

    cout << "Nhap vao so tien trinh : ";
    cin >> n;

    int B[n],P[n],C[n];
    float w=0;

    int max=1;

    for(int i = 1 ; i <= n ; i++){
        cout<< "Nhap vao thoi gian thuc hien cho tien trinh P" << i << "= ";
        cin>>B[i];
        cout<< "Nhap vao priority cho tien trinh P" << i << "= ";
        cin>>P[i];

        //Tim vi tri lon nhat
        if(max < P[i]){
            max = P[i];
        }
    }

    //Thuc hien qua trinh tinh toan cac tien trinh
    for(int i = 1 ; i <= max ; i++){
        for(int j = 1 ; j <= n ; j++){
            if(P[j] == i){
                C[j] = w;
                w += B[j];
            }
        }
    }
    
    //Hien thi thoi gian cac tien trinh
    cout << "\nThoi gian co doi cac tien trinh la: ";
    for (int i = 1 ; i <= n; i++)
        cout << "P" << i << "=" << C[i] << " ";

    //Tinh tong thoi gian cho
    float sum_wait=0;
    for(int i = 1 ; i <= n ; i++)
        sum_wait += C[i];

    cout << "\nThoi gian cho doi trung binh la : " << sum_wait / n;
}


