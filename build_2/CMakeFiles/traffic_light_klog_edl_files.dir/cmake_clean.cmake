file(REMOVE_RECURSE
  "KlogEntity.edl.h"
  "_headers_/traffic_light/KlogEntity.edl"
  "_headers_/traffic_light/KlogEntity.edl.h"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/traffic_light_klog_edl_files.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
