import java.io.*;
import java.util.*;
public class Fileexample {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String file_name=sc.nextLine();
        File file=new File(file_name+".txt");
        try{
            if (file.createNewFile()){  //  how file create
                System.out.println("File is created.");
            }else{
                System.out.println("file is exits");
            }
        }catch (IOException e){
            System.out.println(e.getMessage());
        }
        // how to write in file
        try(FileWriter writer=new FileWriter(file)){
            writer.write("Mango\n");
            writer.write("Banana\n");
            writer.write("Apple\n");
            writer.write("Orange\n");
            writer.close();
        }catch (IOException e){
            System.out.println(e.getMessage());
        }
        ArrayList<String>vv=new ArrayList<>();
        try (Scanner scan=new Scanner(file)){
            while (scan.hasNext()){
                String temp=scan.next(); // Mango -> MOngO   a -> A
                String ans="";
                for (int i=0;i<temp.length();i++){
                    char ch=temp.charAt(i); // 0 1 2 3 4
                    char new_ch=Character.toLowerCase(ch);
                    if (new_ch=='a' ||  ch=='A'|| new_ch=='e' || new_ch=='i' || new_ch=='o' || new_ch=='u'){
                        ch='O';
                    }
                    ans+=ch;// MO
                }
                ans+="\n";
                vv.add(ans);
            }
        }catch (IOException e){
            System.out.println(e.getMessage());
        }
        // jihad nur
        try(FileWriter writer=new FileWriter(file,true)){
            for (int i=0;i<vv.size();i++){
                writer.write(vv.get(i));
            }
        }catch (IOException e){
            System.out.println(e.getMessage());
        }
    }
}
