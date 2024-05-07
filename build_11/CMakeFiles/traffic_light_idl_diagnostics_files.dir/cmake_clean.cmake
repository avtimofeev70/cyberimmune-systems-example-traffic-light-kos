file(REMOVE_RECURSE
  "DiagnosticsMessage.idl.h"
  "_headers_/traffic_light/DiagnosticsMessage.idl"
  "_headers_/traffic_light/DiagnosticsMessage.idl.h"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/traffic_light_idl_diagnostics_files.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
