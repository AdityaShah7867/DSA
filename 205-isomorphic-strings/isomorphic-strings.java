import java.util.HashMap;

class Solution {
    public boolean isIsomorphic(String s, String t) {
        if (s.length() != t.length()) return false; // Strings must be of the same length
        
        HashMap<Character, Character> s_to_t = new HashMap<>(); // Maps s → t
        HashMap<Character, Character> t_to_s = new HashMap<>(); // Maps t → s

        for (int i = 0; i < s.length(); i++) {
            char sChar = s.charAt(i);
            char tChar = t.charAt(i);

            // Check mapping from s → t
            if (s_to_t.containsKey(sChar)) {
                if (s_to_t.get(sChar) != tChar) return false; // Conflict in mapping
            } else {
                s_to_t.put(sChar, tChar);
            }

            // Check mapping from t → s
            if (t_to_s.containsKey(tChar)) {
                if (t_to_s.get(tChar) != sChar) return false; // Conflict in reverse mapping
            } else {
                t_to_s.put(tChar, sChar);
            }
        }

        return true; // All mappings are consistent
    }
}
