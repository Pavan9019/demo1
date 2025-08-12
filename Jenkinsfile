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
        script {
          // Run test but catch failures so pipeline continues
          def status = sh(script: 'sleep 5; exit 1', returnStatus: true)
          if (status != 0) {
            echo "Test failed, but continuing pipeline"
            currentBuild.result = 'UNSTABLE'  // marks build unstable but does not fail
          }
        }
      }
    }

    stage('Parallel Deployment') {
      parallel {
        stage('Deploy to Server 1') {
          steps {
            echo 'Deploying to Server 1'
            sh 'sleep 5'
          }
        }
        stage('Deploy to Server 2') {
          steps {
            echo 'Deploying to Server 2'
            sh 'sleep 5'
          }
        }
      }
    }
  }
}

