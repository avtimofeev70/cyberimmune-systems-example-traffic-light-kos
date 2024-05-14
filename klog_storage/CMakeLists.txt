add_executable (KlogStorageEntity ${EDL_FILES} "src/klog_storage_entity.c")
target_link_libraries (KlogStorageEntity ${klog_storage_SERVER_LIB})
add_dependencies (KlogStorageEntity traffic_light_klog_edl_files traffic_light_klog_storage_edl_files)