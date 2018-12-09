# VPFEM 
Vectrize and parallelized finite element library
# Add the library path
Add this to your .tcshrc
``` setenv  LD_LIBRARY_PATH $(vpfemDirectory)/lib:$LD_LIBRARY_PATH ```
add this to you .bashrc
``` export  LD_LIBRARY_PATH=$(vpfemDirectory)/lib:$LD_LIBRARY_PATH ```
# The library uses spdlog system as the logging system
``` https://github.com/gabime/spdlog ```
