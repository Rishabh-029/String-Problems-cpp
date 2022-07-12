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
            int k=i;
            int j=0;

            while(s[k]==sub[j])
            {
                k++;
                j++;

                if(j==sublen-1)
                {
                    cout<<"substring present in index"<<k-j<<endl;
                }
            }
        }
    }
