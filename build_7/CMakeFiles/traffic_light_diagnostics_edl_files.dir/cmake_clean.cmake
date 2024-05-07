file(REMOVE_RECURSE
  "Diagnostics.edl.h"
  "_headers_/traffic_light/Diagnostics.edl"
  "_headers_/traffic_light/Diagnostics.edl.h"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/traffic_light_diagnostics_edl_files.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
