import java.sql.*;
class MysqlCon{
    public static void main(String args[]){
        try{
            Class.forName("com.mysql.jdbc.Driver");
            Connection con=DriverManager.getConnection(
            "jdbc:mysql://localhost:3306/restaurant","root","root");
            Statement stmt=con.createStatement();
            ResultSet rs=stmt.executeQuery("select first_name, last_name from customer");
            while(rs.next())
            System.out.println(rs.getString(20)+" "+rs.getString(20));

            con.close();
        }catch(Exception e){ System.out.println(e);}
    }
}
