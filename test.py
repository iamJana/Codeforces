#User function Template for python3

class Solution:
   
    def pattern(self, N):
        if N>0:
            return str(pattern(N))
        
             
             
        # code here
if __name__=='__main__':
    t=int(input())
    for _ in range(t):
        N=int(input())
        ob=Solution()
        ans=ob.pattern(N)
        for i in ans:
            print(i,end=' ')
        print()
