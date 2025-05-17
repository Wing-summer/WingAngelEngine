// example.as

// An enumeration of possible states
enum State
{
    STATE_IDLE,
    STATE_RUNNING,
    STATE_FINISHED
}

void test(){
    print("hello");
}

// Global variable
int g_counter = 0;
string a = "hello world";
int[] buffer = {1,2,3,4,5};


// A simple class with a property and a method
class Task
{
    // Property: the current state of this task
    State state;

    // Constructor
    Task()
    {
        state = STATE_IDLE;
    }

    // Method to perform the task
    void Run()
    {
        state = STATE_RUNNING;
        // Simulate doing work by incrementing the global counter
        for (uint i = 0; i < 5; ++i)
        {
            g_counter++;
            Print("Task is running. Counter: " + g_counter);
        }
        state = STATE_FINISHED;
    }

    // Method to print current state
    void PrintState()
    {
        string name;
        switch (state)
        {
            case State::STATE_IDLE:     name = "Idle";    break;
            case State::STATE_RUNNING:  name = "Running"; break;
            case State::STATE_FINISHED: name = "Finished";break;
        }
        Print("Task state: " + name);
    }
}

float tfloat = 1e3;

// Entry point
int main()
{
    Print("Starting script...");

    // Create and run a task
    Task myTask;
    myTask.PrintState();  // Should be Idle

    myTask.Run();         // Performs work, updates g_counter
//    myTask.

//     PrintState();  // Should be Finished
// 
//     Print("Final global counter value: " + g_counter);
// 
//     return 0;
}
