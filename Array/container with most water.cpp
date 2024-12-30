#include<iostream>
#include<vector>
using namespace std;
    int maxArea(vector<int>& height) {
        int maxwater=0;
        int lp=0;
        int rp=height.size()-1;
        while(lp<rp)
        {
            int w=rp-lp;
            int ht=min(height[lp],height[rp]);
            int currwater=w*ht;
            maxwater=max(maxwater,currwater);
            if(height[lp]<height[rp]){
                lp++;
            }  
            else
            rp--;    
        }  
        return maxwater;
    }
    int main()
    {
    	
    	vector<int> height;
    int n;
    cout<<"enter the number of height"<<endl;
    cin>>n;
    cout<<"enter the height"<<endl;
    
    for(int i=0;i<n;i++)
    {
    	int h;
    	cin>>h;
    	height.push_back(h);
	}
	int result=maxArea(height);
	cout<<"the container with most water is "<<result<<endl;
	}
    

