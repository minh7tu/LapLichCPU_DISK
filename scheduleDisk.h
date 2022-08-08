#include<iostream>
#include<string>

using namespace std;

//First Come First Server
void fcfs_disk(){
    int seek_count = 0 , distance , cur_track , n , head;

    cout<<"Nhap vao n : ";cin>>n;
    cout<<"Nhap vao head : ";cin>>head;
    
    int arr[n];
    
    cout<<"Nhap vao queue : ";
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }

    for (int i = 0 ; i < n ; i++) {
        cur_track = arr[i];//Luu lai vi tri thuc hien
        distance = abs(cur_track - head);//Tinh khoang cach g
        seek_count += distance;//Tinh thoi gian
        head = cur_track;//Gan lai head bang cur_track hien tai
    }
 
    cout << "Tong quang duong di chuyen cua dau dia tu la  = "<< seek_count << endl;

}
