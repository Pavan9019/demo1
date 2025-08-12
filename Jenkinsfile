pipeline {
  agent any

  stages {
    stage('BUILD') {
      steps {
        echo "This is Build stage"
        sh '''
          sleep 5
          exit 0
        '''
      }
    }

    stage('TEST') {
      steps {
        echo "This is Test stage"
        sh 'sleep 5; exit 1'  // This will fail the build, remove or modify if you want
      }
    }

    stage('Parallel Deployment') {
      parallel {
        stage('Deploy to Server 1')

