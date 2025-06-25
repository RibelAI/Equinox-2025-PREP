CXX = g++
Target = P12
SRCS = FileStudent.cpp
$(Target): $(SRCS)
	$(CXX) $(SRCS) -o $(Target)
	
clean :
	rm -f $(Target)
