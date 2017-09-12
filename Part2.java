import java.io.*;
import java.lang.*;

public class Part2{
    
   String findSimpleGene(String DNA){
        
        DNA = DNA.toUpperCase();
        int start = DNA.indexOf("ATG");
        int end = DNA.indexOf("TAA", start + 3);
        if(end == -1 || start == -1 || (end - start)%3 != 0)
            return "";
        else 
            return DNA.substring(start, end + 3);
    }
    
    void testSimpleGene(){
        
        String DNA = "ATACGATATTATACCCGAGAT";
        String gene = findSimpleGene(DNA);
        System.out.println("Gene: " + gene);
        
        DNA = "ATCGGATATCATAACCCGAGAT";
        gene = findSimpleGene(DNA);
        System.out.println("Gene: " + gene);
        
        DNA = "ATGACGATATTATACCCGAGAT";
        gene = findSimpleGene(DNA);
        System.out.println("Gene: " + gene);
        
        DNA = "ATGACGATATAATATAACTGCGAGAT";
        gene = findSimpleGene(DNA);
        System.out.println("Gene: " + gene);
        
        DNA = "ATGACGATAGTAATATAACCCGAGAT";
        gene = findSimpleGene(DNA);
        System.out.println("Gene: " + gene);
    }
}