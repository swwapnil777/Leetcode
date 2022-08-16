class Solution {
public:
    string capitalizeTitle(string title) {
   transform(title.begin(),title.end(),title.begin(),::tolower);
        if(title.size()<=2){
            return title;
        }
        int i=0;
        int size = title.size();
        while(i<size){
             int count = 0;
            while(title[i]>='a' && title[i]<='z'){ 
                if(count==0){
                    title[i]=title[i]-32;
                }
                count++;
                i++;
            }
            if(count==2){
              title[i-2]=title[i-2]+32;
            }
             if(count==1){
               title[i-1]=title[i-1]+32;
            }
            
            i++; 
        }
        return title;
       
        
    }
};