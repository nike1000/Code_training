public class Solution
{
    public double findMedianSortedArrays(int[] nums1, int[] nums2)
    {
        int len = nums1.length + nums2.length;
        double array[] = new double[len];
        int k = 0;

        for(int i = 0, j = 0; k <= len / 2 ; k++)
        {
            if (i >= nums1.length) array[k] = nums2[j++];
            else if (j >= nums2.length) array[k] = nums1[i++];
            else array[k] = (nums1[i] < nums2[j] ? nums1[i++] : nums2[j++]);
        }

        if(len % 2 == 0) return (array[k-1]+array[k-2])/2;
        else return array[k-1];
    }
}
