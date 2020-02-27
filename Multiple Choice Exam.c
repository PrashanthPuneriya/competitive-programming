#include <stdio.h>

int main(void) {
	int t,n;
	scanf("%d",&t);
	while(t)
	{   
	    int score=0;
	    scanf("%d",&n);
        char cor[n];
        char written[n];
        scanf("%s",cor);
        scanf("%s",written);
        for(int i=0;i<n;i++)
        {
            if(written[i]==cor[i])
                score++;
                
            else if(written[i]!=cor[i])
            {    
        		
                if( written[i]!='N')
                {
                
                    i++;
                }
            
        	    else if(written[i]=='N')
                ;
                    
                else if(i==n-1)
        		;
            
            }
            
        }   
        printf("%d\n",score);
    t--;
	}
	
	return 0;
}

