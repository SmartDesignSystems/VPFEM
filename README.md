# VPFEM 
Vectrize and parallelized finite element library
## Add the library path (not nessesary)
Add this to your .tcshrc  
``` setenv  LD_LIBRARY_PATH $(vpfemDirectory)/lib:$LD_LIBRARY_PATH ```  
add this to you .bashrc  
``` export  LD_LIBRARY_PATH=$(vpfemDirectory)/lib:$LD_LIBRARY_PATH ```  
The library is link to the sandbox application which is provided in the repository by rpath
## The library uses spdlog system as the logging system
``` https://github.com/gabime/spdlog ```
## Vpfem.h  
The sandbox application should include the ```Vpfem.h```  
The files is located at   
``` VPFEM/Vpfem/include/Vpfem.h ```