if (NOT VERBOSE)
	set(ffmpegExtractOutput OUTPUT_VARIABLE FFMPEG_EXTRACT_OUTPUT)
endif (NOT VERBOSE)

if (EXISTS "${FFMPEG_ROOT_DIR}/${FFMPEG_SOURCE_ARCHIVE}")
	MESSAGE(STATUS "Creating ${FFMPEG_BASE_DIR}")
	file(MAKE_DIRECTORY "${FFMPEG_BASE_DIR}")
	if (NOT EXISTS "${FFMPEG_SOURCE_DIR}/ffmpeg.c" OR NOT "${LAST_FFMPEG_VERSION}" STREQUAL "${FFMPEG_VERSION}")
		find_package(Tar)
		MESSAGE(STATUS "Unpacking ffmpeg from ${FFMPEG_ROOT_DIR}/${FFMPEG_SOURCE_ARCHIVE} to ${FFMPEG_BASE_DIR}")        

		execute_process(COMMAND ${CMAKE_COMMAND} -E copy "${FFMPEG_ROOT_DIR}/${FFMPEG_SOURCE_ARCHIVE}" "${FFMPEG_BASE_DIR}")

		execute_process(COMMAND ${TAR_EXECUTABLE} xvfj "${FFMPEG_SOURCE_ARCHIVE}"
			WORKING_DIRECTORY "${FFMPEG_BASE_DIR}"
			${ffmpegExtractOutput})

		execute_process(COMMAND ${CMAKE_COMMAND} -E rename "${FFMPEG_SOURCE_ARCHIVE_DIR}" "source"
			WORKING_DIRECTORY "${FFMPEG_BASE_DIR}")

		set(FFMPEG_PERFORM_PATCH 1)
		set(FFMPEG_PERFORM_BUILD 1)
	endif (NOT EXISTS "${FFMPEG_SOURCE_DIR}/ffmpeg.c" OR NOT "${LAST_FFMPEG_VERSION}" STREQUAL "${FFMPEG_VERSION}")

	set(FFMPEG_PREPARED 1)
	set(LAST_FFMPEG_VERSION "${FFMPEG_VERSION}" CACHE STRING "" FORCE)
endif (EXISTS "${FFMPEG_ROOT_DIR}/${FFMPEG_SOURCE_ARCHIVE}")
