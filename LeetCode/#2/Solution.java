/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
public class Solution
{
    public ListNode addTwoNumbers(ListNode l1, ListNode l2)
    {
        int sum = 0;
        int carry = 0;
        ListNode ans = new ListNode(0);
        ListNode head = ans;

        while(l1 != null || l2 != null || carry != 0)
        {
            sum = (l1 == null ? 0 : l1.val) + (l2 == null ? 0 : l2.val) + carry;

            ans.next = new ListNode(sum % 10);
            ans = ans.next;
            carry = sum / 10;
            l1 = (l1 == null ? null : l1.next);
            l2 = (l2 == null ? null : l2.next);
        }

        return head.next;
    }
}
