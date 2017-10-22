This is an example showing how to make use of QCommandLineParser and QCommandLineOption to interpret command line paramenters in Qt C++. 

When running:

1) without any paramenters
Error: Must specify an argument.
Usage: untitled2.exe [options]
This is example of console application

Options:
-?, -h, --help Displays this help.
-v, --version Displays version information.
-o, --opt <opt> Option is: fr

2) Running with a paramether other than "fr", for example -o abc　　
Error: Invalid format argument. Must be fr
Usage: untitled2.exe [options]
This is example of console application

Options:
-?, -h, --help Displays this help.
-v, --version Displays version information.
-o, --opt <opt> Option is: fr

3) Running with a command paramenter -o fr
Sum: 9
