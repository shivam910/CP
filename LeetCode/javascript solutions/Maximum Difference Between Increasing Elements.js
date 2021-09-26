/**
 * @param {number[]} nums
 * @return {number}
 */
var difference = (x,y) =>
{
    return (x>y) ? x : y;
}

var maximumDifference = (nums)=> {
    let diff = Number.MIN_VALUE;
    if(nums.length ==0)
        return diff;
    
    for( let i=0; i<nums.length -1; i++) {  
        for( let j=i; j< nums.length; j++)
            {
                if(nums[j] > nums [i])    
                    diff = difference(diff, nums[j] - nums [i])
            }
       }
    if(diff<1) return -1;
    return diff;
};
