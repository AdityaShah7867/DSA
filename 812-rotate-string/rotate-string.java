class Solution {
    public boolean rotateString(String s, String goal) {
        if (s.length() != goal.length()) return false;
        String comboString = s+s ;
        return comboString.contains(goal);
    }
}