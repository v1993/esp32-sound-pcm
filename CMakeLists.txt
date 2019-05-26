# PLEASE, UPDATE THIS FILE WHEN ADDING ANY NEW C SOURCES

set(COMPONENT_SRCS
	# Main code
	"soundProviderPcm.cpp"
	)

set(COMPONENT_REQUIRES "esp32-sound")
set(COMPONENT_ADD_INCLUDEDIRS ".")

register_component()
