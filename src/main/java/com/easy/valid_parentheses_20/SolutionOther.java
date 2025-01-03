package com.easy.valid_parentheses_20;

public class SolutionOther extends AbstractSolution {
    public boolean isValid(String s) {
        int sLength = s.length();
        while (!s.isBlank()) {
            // s = s.replaceAll("(\\(\\))|(\\[])|(\\{})", "");
            s = s.replaceAll("\\(\\)", "").replaceAll("\\[]", "").replaceAll("\\{}", "");
            if (s.length() == sLength) {
                return false;
            }
            sLength = s.length();
        }
        return true;
    }
}
