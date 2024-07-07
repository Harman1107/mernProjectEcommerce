      #include <bits/stdc++.h>
      using namespace std;

      int main(){
      int t;
      cin>>t;
      while(t--){
            int x[3];
            int a[7];
            bool flag = 0;
            for(int i=0;i<7;i++){
                  cin>>a[i];
            }
      if(a[0]+a[1]!=a[2])
      {
         if(a[3]!=a[0]+a[1])
         {
            // cout<<"NO";
            flag = 1;
         }
          if(a[4]!=a[0]+a[2])
          {
            // cout<<"NO";
            flag = 1;
         }
          if(a[5]!=a[1]+a[2])
         {
            // cout<<"NO";
            flag = 1;
         }
          if(a[5]!=a[0]+a[2]+a[1])
         {
            // cout<<"NO";
            flag = 1;
         }
      }else{
           
          if(a[4]!=a[0]+a[3])
          {
            // cout<<"NO";
            flag = 1;
         }
          if(a[5]!=a[1]+a[3])
         {
            // cout<<"NO";
            flag = 1;
         }
          if(a[5]!=a[0]+a[3]+a[1])
         {
            // cout<<"NO";
            flag = 1;
         }
      }
      // cout<<"YES"<<endl;
      if(!flag){
            if(a[0]+a[1]!=a[2])
      cout<<a[0]<<" "<<a[1]<<" "<<a[2];
      else
       cout<<a[0]<<" "<<a[1]<<" "<<a[3];
      }
      }
      
      }