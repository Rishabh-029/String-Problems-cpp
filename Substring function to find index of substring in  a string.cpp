    #include<bits/stdc++.h>
    using namespace std;
    
    int main()
    {
        string s="my name is na";
        string sub="na";

        int len=s.size();
        int sublen=sub.size();
      

        for(int i=0;i<len-sublen+1;i++)
        {
            if((s.substr(i,sublen))==sub)
            {
                cout<<"index is"<<i<<endl;
            }
        }

    }
