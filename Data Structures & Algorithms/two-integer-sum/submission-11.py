class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        
        temp=nums.copy()
        temp.sort()
        i=0
        j=len(temp)-1

        while i<j:
            if (temp[i]+temp[j])>target:
                j-=1
            elif temp[i]+temp[j]<target:
                i+=1
            else:
                break

        a=temp[i]
        b=temp[j]
        ans1=-1
        ans2=-1
        for ind in range(len(nums)):
            if nums[ind]==a:
                ans1=ind
                break
        for indx in range(len(nums)):
            if nums[indx]==b:
                ans2=indx
        print(ind,indx)
        return [min(ans1,ans2),max(ans1,ans2)]