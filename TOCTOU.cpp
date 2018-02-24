#include <cstdio>
#include <cstdlib>

void OpenFile1(const char* file)
{
	FILE* f = fopen(file, "r");
	
	if (f != nullptr) 
	{
		// File exists, handle error
	}
	else
	{
		if (fclose(f) == EOF)
		{
			// Handle error
		}
		
		f = fopen(file, "w");
		if (f == nullptr)
		{
			// Handle error
		}

		// Write to file
		if (fclose(f) == EOF)
		{
			/* Handle error */
		}
	}
}

void OpenFile2(const char* file)
{
	FILE* f = fopen(file, "wx");
	
	if (f == nullptr)
	{
		// Handle error
	}

	// Write to file
	if (fclose(f) == EOF)
	{
		// Handle error
	}
}

int main()
{
	OpenFile1("test.txt");
	OpenFile2("test.txt");

	return EXIT_SUCCESS;
}