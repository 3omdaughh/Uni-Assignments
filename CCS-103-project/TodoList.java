import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Scanner;
import java.util.Arrays;

public class TodoList 
{
    private HashMap<String, TodoItem> tasks;

    public TodoList() 
    {
        this.tasks = new HashMap<>();
    }
    public static void clearScreen() 
    {
        System.out.print("\033[H\033[2J"); 
        /* 
        * ANSI escape codes
        * \033 to order, [H to move the cursor to the top left corner of the terminal
        * \033 to order, [2J to clear the entire console screen
        */
        System.out.flush();
    }

    public void addTask()
    {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter task name:");
        String taskName = scanner.nextLine();
        clearScreen();

        System.out.println("Enter task description:");
        String taskDescription = scanner.nextLine();
        clearScreen();

        System.out.println("Enter task deadline (DD-MM-YYYY):");
        String taskDeadlineInput = scanner.nextLine();
        clearScreen();

        System.out.println("Enter the Gmail addresses of the people working on this task (separated by a comma):");
        String gmailInput = scanner.nextLine();
        List<String> gmails = Arrays.asList(gmailInput.split(","));
        clearScreen();

        TodoItem todoItem = new TodoItem(taskName, taskDescription, taskDeadlineInput, gmails);
        this.tasks.put(taskName, todoItem);

        System.out.println("Task added successfully!");
    }

    public void display() 
    {
        System.out.println("Here is our Task List:\n");
        for (String task : this.tasks.keySet()) 
        {
            TodoItem todoItem = this.tasks.get(task);
            System.out.println("Task " + task + ": " + todoItem.getDescription());
            System.out.println("Deadline: " + todoItem.getDeadline());
            System.out.println("Assigned to: " + String.join(", ", todoItem.getGmails()));
            System.out.println("-----------------------------------");
        }
    }

    public static void main(String[] args) 
    {
        TodoList myTodoList = new TodoList();
        
        Scanner scanner = new Scanner(System.in);
        boolean exit = false;

        while (!exit) 
        {
            System.out.println("Choose an option: 1 - Add task, 2 - Display tasks, 3 - Exit");
            int option = scanner.nextInt();
            clearScreen();

            switch (option) 
            {
                case 1:
                    myTodoList.addTask();
                    break;
                case 2:
                    myTodoList.display();
                    break;
                case 3:
                    System.out.println("ThankYou!");
                    exit = true;
                    break;
                default:
                    System.out.println("Invalid option, please try again.");
            }
        }

        scanner.close();
    }
}


class TodoItem 
{
    private String name;
    private String description;
    private String deadline;
    private String gmail;
    private List<String> gmails;

    public TodoItem(String name, String description, String deadline,  List<String> gmails) 
    {
        this.name = name;
        this.description = description;
        this.deadline = deadline;
        this.gmails = gmails;
    }

    public String getName() 
    {
        return name;
    }

    public String getDescription() 
    {
        return description;
    }

    public String getDeadline() 
    {
        return deadline;
    }

    public List<String> getGmails() 
    {
        return gmails;
    }
}