# CMakeList.txt: Projekt CMake pro mystupid_2048, sem přidejte logiku zdrojového
# kódu a definic specifickou pro projekt.
#

# Přidejte zdrojový kód ke spustitelnému souboru tohoto projektu.
add_executable (mystupid_2048 "mystupid_2048.cpp" "mystupid_2048.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET mystupid_2048 PROPERTY CXX_STANDARD 20)
endif()

# TODO: V případě potřeby přidejte testy a cíle instalace.
