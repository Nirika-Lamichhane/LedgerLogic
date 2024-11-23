# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\LedgerLogic_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\LedgerLogic_autogen.dir\\ParseCache.txt"
  "LedgerLogic_autogen"
  )
endif()
