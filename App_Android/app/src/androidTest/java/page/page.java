package page;

import java.io.FileWriter;
import java.io.IOException;
import java.io.File;
import org.json.JSONObject;

public class page {

    public void Page_New(String filename)
    {
        try
        {
            FileWriter file = new FileWriter(filename + ".json");
            file.flush();
        }
        catch ( IOException exp )
        {
            exp.printStackTrace();
        }
    }

    public void Page_Delete(String filename)
    {
        File file = new File(filename + ".json");
        file.delete();
    }

    public void Page_Close(String filename)
    {
        File file = new File(filename + ".json");
        file.close();
    }

    public void Page_Open(String filename)
    {

    }

}
